#include <linux/init.h>             // Macros used to mark up functions e.g., __init __exit
#include <linux/module.h>           // Core header for loading LKMs into the kernel
#include <linux/kernel.h>           // Contains types, macros, functions for the kernel


#include <linux/device.h>
#include <linux/fs.h>

MODULE_LICENSE("GPL");              ///< The license type -- this affects runtime behavior
MODULE_AUTHOR("phutruong");      ///< The author -- visible when you use modinfo
MODULE_DESCRIPTION("A simple Linux character driver for the BBB.");  ///< The description -- see modinfo
MODULE_VERSION("0.1");              ///< The version of the module

static int majorNumber;
static struct class* myClassID = NULL;
static struct device* mydev = NULL;

static struct file_operations myfileop = 
{
  .open = NULL,
  .release = NULL
};
/** @brief The LKM initialization function
 *  The static keyword restricts the visibility of the function to within this C file. The __init
 *  macro means that for a built-in driver (not a LKM) the function is only used at initialization
 *  time and that it can be discarded and its memory freed up after that point.
 *  @return returns 0 if successful
 */
static int __init chardriver_init(void){
   printk(KERN_INFO "EBB: chardriver init!\n");
   
   /*
     driver: dev_type (c, b) + major + minor
     Cap phat so major cho thiet bi
     API: register_chrdev()
     Input: 
        1.So luong thiet bi
	2. device name: /dev/<dev_name> -> /dev/chardrv 
         NAME = chardrv
        3. file operation structures
   */
    majorNumber = register_chrdev(0, "chardrv", &myfileop);
    if(majorNumber < 0)
    {
	printk(KERN_ALERT "faile to register a major number");	
	return majorNumber;
    }

   /*
    Dang ky thiet bi vao mot class
    API: class_create   
       
   */
    myClassID =  class_create(THIS_MODULE, "testclass");
    if(myClassID == NULL)
     {
	unregister_chrdev(majorNumber, "chardrv");
	return -1;
     }

   /*
	Dang ky thiet voi he thong, khi do se tao device file trong
	folder /dev/
   */
    mydev = device_create(myClassID, NULL, MKDEV(majorNumber, 0), NULL, "chardrv");
    if(mydev == NULL){
       //destroy class
        class_destroy(myClassID);
      //Huy dang ky thiet bii
	unregister_chrdev(majorNumber, "chardrv");
        return -1;
    }
   return 0;
}

/** @brief The LKM cleanup function
 *  Similar to the initialization function, it is static. The __exit macro notifies that if this
 *  code is used for a built-in driver (not a LKM) that this function is not required.
 */
static void __exit chardriver_exit(void){
   printk(KERN_INFO "EBB: chardriver exit!\n");
   //xoa dang ky thiet bi
   
   device_destroy(myClassID, MKDEV(majorNumber, 0));
   class_unregister(myClassID);
   class_destroy(myClassID);
   unregister_chrdev(majorNumber, "chardrv");
}

/** @brief A module must use the module_init() module_exit() macros from linux/init.h, which
 *  identify the initialization function at insertion time and the cleanup function (as
 *  listed above)
 */
module_init(chardriver_init);
module_exit(chardriver_exit);

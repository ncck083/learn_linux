

int main()
{
    unsigned int *pu_GPFCON = (unsigned int *)0x56000050;
    unsigned int *pu_GPFDAT = (unsigned int *)0x56000054;
    
    *pu_GPFCON = 0x100;
    *pu_GPFDAT = 0x0;
    return 0;
}
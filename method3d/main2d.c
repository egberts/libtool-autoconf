
// Get an executable that points to a dynamic library

extern void lib_init(void);

int
main(int argc, char *argv[])
{
    lib_init();
}


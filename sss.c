
int main()
{
	char * ptr1 = (char *) malloc (10); // allocating 10 bytes
	int * ptr2 = (int *) calloc (10, sizeof(int)); 	// allocating 40 bytes
	// let sizeof int =  4 bytes)
	float * ptr3 = (float *) calloc (15, sizeof(float)); // allocating 60 bytes
	free(ptr2);
	return 0;
}
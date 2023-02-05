#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char name[30];
	int id;
	int exam[3];
	int hws[3];
	char letter_grade; 
	
} STUDENT_DATA;

typedef enum {
	FALSE,
	TRUE,
} BOOL;
// TASK 1
BOOL read_from_text_file (FILE* text_file, STUDENT_DATA* a_student);
BOOL write_into_binary_file (FILE* binary_file, STUDENT_DATA* a_student);

// TASK 2
BOOL read_from_binary_file(FILE* binary_file, STUDENT_DATA* a_student);
BOOL write_into_text_file(FILE* text_file, STUDENT_DATA* a_student);

int main(int argc,char* argv[]){
	// getting arguments
	if(argc != 4){
	printf("Enter:\n");
	printf("./ %s source file name, dest text file name, destination binary file name",argv[0]);
	//source file name, dest text file name, destination binary file name
	return 1;
	}
	STUDENT_DATA* students=(STUDENT_DATA*)malloc(sizeof(STUDENT_DATA)*5);
	char* src_text_file_name = argv[1];
	char* src_dst_text_name = argv[2];
	char* src_dst_binary_name = argv[3];
	
	FILE* src=fopen(src_text_file_name,"r");
	FILE* text_file=fopen(src_dst_text_name,"w+");
	FILE* binary_file=fopen(src_dst_binary_name,"w+");
	for(int i=0;i<5;i++){
	read_from_text_file (src,&students[i]);
	write_into_binary_file (binary_file,&students[i]);
	}
	for(int i=0;i<5;i++){
		read_from_binary_file(binary_file,&students[i]);
		write_into_text_file(text_file,&students[i]);
	}
	
	fclose(src);
	fclose(text_file);
	fclose(binary_file);
	
	
	text_file =fopen(src_text_file_name,"r");
	
	/*int** grades_matrix=(int**)malloc(sizeof(int*)*5);
	for(int i=0;i<6;i++){
		grades_matrix[i]=(int*)malloc(6*sizeof(int));
	}
	for(int i=0;i<5;i++){
		read_from_text_file(text_file,&students[i]);
		for(int j=0;j<3;j++){
		grades_matrix[i][j]=students[i].exam[j];
		}
		for(int j=0;j<3;j++){
		grades_matrix[i][j]=students[i].hws[j];
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++){
		printf("%4d",grades_matrix[i][j]);
		}
		printf("\n");
	}*/
	
	
	for(int i=0;i<5;i++){
		read_from_text_file(text_file,&students[i]);
		for(int j=0;j<3;j++){
		printf("%4d",students[i].exam[j]);
		}
		for(int j=0;j<3;j++){
		printf("%4d",students[i].hws[j]);
		}
		printf("\n");
	}/*
	for(int i=0;i<6;i++){
		free(grades_matrix[i]);
	}
	free(grades_matrix);*/
	free(students);
	return 0;
}
BOOL read_from_text_file (FILE* text_file, STUDENT_DATA* a_student){
	int amount_read;
	amount_read = fscanf(text_file,"%s %d  %d %d %d %d %d %d %c",a_student->name,&a_student->id,
			&a_student->exam[0],&a_student->exam[1],&a_student->exam[2],
			&a_student->hws[0],&a_student->hws[1],&a_student->hws[2],&a_student->letter_grade);
	if(amount_read == 9) return TRUE;
	else return FALSE;
	
}
BOOL write_into_binary_file (FILE* binary_file, STUDENT_DATA* a_student){
	int amount_written;
	amount_written = fwrite(a_student,sizeof(STUDENT_DATA),1,binary_file);
	if(amount_written != 1) return FALSE;
	else return TRUE;
}
BOOL read_from_binary_file(FILE* binary_file, STUDENT_DATA* a_student){
	int amount_read;
	amount_read = fread(a_student,sizeof(STUDENT_DATA),1,binary_file);
	
	if(amount_read == 1)return TRUE;
	else return FALSE;
}
BOOL write_into_text_file(FILE* text_file, STUDENT_DATA* a_student){
	int amount_written;
	amount_written = fprintf(text_file,"%-30s %5d  %3d %3d %3d %3d %3d %3d %c",a_student->name,a_student->id,
			a_student->exam[0],a_student->exam[1],a_student->exam[2],
			a_student->hws[0],a_student->hws[1],a_student->hws[2],a_student->letter_grade);
	fprintf(text_file,"\n");
	if(amount_written < 0)return FALSE;
	else  return TRUE;
}
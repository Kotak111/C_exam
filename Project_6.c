#include <stdio.h>
#include <string.h>

#define MAX_MOVIES 100
#define MAX_TITLE 100
#define MAX_GENRE 50
#define MAX_LANGUAGE 50


struct Movie {
    char title[MAX_TITLE];
    char genre[MAX_GENRE];
    char language[MAX_LANGUAGE];
};

int main() {
    int n; 
    struct Movie movies[MAX_MOVIES]; 

   
    printf("Enter the number of movies: ");
    scanf("%d", &n);
    getchar(); 

    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for movie %d:\n", i + 1);
        
        printf("Title: ");
        fgets(movies[i].title, sizeof(movies[i].title), stdin);
        movies[i].title[strcspn(movies[i].title, "\n")] = 0; 

        printf("Genre: ");
        fgets(movies[i].genre, sizeof(movies[i].genre), stdin);
        movies[i].genre[strcspn(movies[i].genre, "\n")] = 0; 

        printf("Language: ");
        fgets(movies[i].language, sizeof(movies[i].language), stdin);
        movies[i].language[strcspn(movies[i].language, "\n")] = 0; 
    }

    // Display movie details
    printf("\nMovie Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nMovie %d:\n", i + 1);
        printf("Title: %s\n", movies[i].title);
        printf("Genre: %s\n", movies[i].genre);
        printf("Language: %s\n", movies[i].language);
    }

    return 0;
}

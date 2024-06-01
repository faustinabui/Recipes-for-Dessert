#include <iostream>
#include <string>
#include <map>

using namespace std;

// Function to convert a string to lowercase
string toLower(const string& str) {
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

int main() {
    // Predefined recipes for common desserts
    map<string, string> dessertRecipes = {
        {"chocolate cake", 
            "Ingredients:\n"
            "- 1 and 1/2 cups flour\n"
            "- 1 cup sugar\n"
            "- 1/4 cup cocoa powder\n"
            "- 1 teaspoon baking soda\n"
            "- 1/2 teaspoon salt\n"
            "- 1 cup water\n"
            "- 1/3 cup vegetable oil\n"
            "- 1 tablespoon vinegar\n"
            "- 1 teaspoon vanilla extract\n"
            "Instructions:\n"
            "1. Preheat oven to 350°F (175°C).\n"
            "2. Mix dry ingredients in a bowl.\n"
            "3. Add wet ingredients and mix until smooth.\n"
            "4. Pour into a greased baking pan.\n"
            "5. Bake for 30-35 minutes.\n"
            "6. Let cool before serving."
        },
        {"apple pie", 
            "Ingredients:\n"
            "- 2 and 1/2 cups flour\n"
            "- 1 teaspoon salt\n"
            "- 1 cup butter\n"
            "- 1/4 cup ice water\n"
            "- 6 cups thinly sliced apples\n"
            "- 3/4 cup sugar\n"
            "- 2 tablespoons flour\n"
            "- 1 teaspoon cinnamon\n"
            "- 1/4 teaspoon nutmeg\n"
            "Instructions:\n"
            "1. Preheat oven to 425°F (220°C).\n"
            "2. Mix flour and salt for crust.\n"
            "3. Cut in butter until crumbly.\n"
            "4. Add ice water and mix until dough forms.\n"
            "5. Roll out half the dough and place in pie dish.\n"
            "6. Mix apples with sugar, flour, cinnamon, and nutmeg.\n"
            "7. Pour apple mixture into crust.\n"
            "8. Roll out remaining dough and place on top.\n"
            "9. Bake for 45-50 minutes.\n"
            "10. Let cool before serving."
        },
        {"banana bread", 
            "Ingredients:\n"
            "- 2-3 ripe bananas\n"
            "- 1/3 cup melted butter\n"
            "- 1 teaspoon baking soda\n"
            "- Pinch of salt\n"
            "- 3/4 cup sugar\n"
            "- 1 beaten egg\n"
            "- 1 teaspoon vanilla extract\n"
            "- 1 and 1/2 cups flour\n"
            "Instructions:\n"
            "1. Preheat oven to 350°F (175°C).\n"
            "2. Mash bananas in a bowl.\n"
            "3. Mix in melted butter.\n"
            "4. Add baking soda, salt, sugar, egg, and vanilla extract. Mix well.\n"
            "5. Add flour and mix until just combined.\n"
            "6. Pour into a greased loaf pan.\n"
            "7. Bake for 60-65 minutes.\n"
            "8. Let cool before serving."
        }
    };

    string dessert;
    
    // Get dessert name from the user
    cout << "Enter the name of the dessert: ";
    getline(cin, dessert);
    dessert = toLower(dessert);

    // Find and display the recipe
    if (dessertRecipes.find(dessert) != dessertRecipes.end()) {
        cout << "\nRecipe for " << dessert << ":\n";
        cout << dessertRecipes[dessert] << endl;
    } else {
        cout << "Sorry, the recipe for " << dessert << " is not available." << endl;
    }

    return 0;
}

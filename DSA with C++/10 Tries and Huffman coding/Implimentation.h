// implimentation of trie class

class trieNode{
    public:
    char data;
    trieNode** next;
    bool terminal;

    // constructor
    trieNode(char data){
        this -> data = data;

        next = new trieNode*[26];
        for(int i=0; i<26; i++)
             next[i] = NULL;

        terminal = false;
    }

};


class trie{
    trieNode* root;

    public :
       // constructor
       trie(){
           root = new trieNode('\0');
       }

       // insertion of word
       void insert(trieNode* root,string word){

           if(word.size() == 0){
               root->terminal = true;
               return;
           }

           int index = word[0]-'a';
           if(root->next[index]){
               insert(root->next[index],word.substr(1));
           }else{
               trieNode* child = new trieNode(word[0]);
               root->next[index] = child;
               insert(child, word.substr(1));
           }
       }
       
       // for user
       void insert(string word){
           insert(root,word);
       }

       // search for a word
       bool search(trieNode* root, string word){
         
           if(root->terminal  && word.size() == 0)
                return true;
            

           int index = word[0]-'a';
           if(!root->next[index])
             return false;

           return search(root->next[index],word.substr(1));
              
       }

       // for user
       bool search(string word){
         return search(root, word);
       }

       // remove word
       void remove(trieNode* root, string word){
           if(word.size() == 0){
               root->terminal = false;
               return;
           }

           int index = word[0]-'a';
           if(root->next[index] == NULL)
              return;

            remove(root->next[index],word.substr(1));

            if(root->terminal == false){
                for(int i=0; i<26; i++)
                   if(root->next[index]->next[i] != NULL)
                      return;

                delete root->next[index];
                root->next[index] = NULL;     
            }  
       }

       //for user
       void remove(string word){
           remove(root,word);
       }


};
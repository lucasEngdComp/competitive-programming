class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0; i < image.size();i++){
            std::reverse(image[i].begin(),image[i].end());
            for(int j; j < image[i].size();j++){
                image[i][j] = (image[i][j] == 0 ? 1 : 0);
            }
        }
        return image;
    }
};


int main(){

	int arr[6] = {2,3,8,1,-1,6};
	






	return 0;




}

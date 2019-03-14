//
// Created by root on 12/23/18.
//

#ifndef MYCLIONPROJECT_14_22_FRND2TMP2_H
#define MYCLIONPROJECT_14_22_FRND2TMP2_H

template <typename T>
class HasFriend{
private:
    T item;
    static int ct;

public:
    HasFriend(const T & i) : item(i){ct ++;};
    ~HasFriend(){ct --;};
    friend void counts();
    friend void reports(HasFriend<T> &);
};

void my_frnd2tmp2_main();


#endif //MYCLIONPROJECT_14_22_FRND2TMP2_H

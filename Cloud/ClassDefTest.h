#pragma once

/*!
*@brief        �����ɣ�����Ա���ʿ���
*@author       tangw  2019/07/18  16:22
*@remarks      ��
*/

class DefDemo
{
public:
    void publicFunc() {}
    int m_nPublic;

protected:
    void protectedFunc() {}
    int m_nProtected;

private:
    void privateFunc() {}
    int m_nPrivate;
};

class DefPublicSub : public DefDemo
{
    // ֻ�и����private���������Բ��ܷ��ʣ������������з��������Եķ��ʼ���
    void testVisit()
    {
        publicFunc();
        protectedFunc();
        //privateFunc();      // ���ɷ���
    }
};

class DefPortectedSub : protected DefDemo
{
    // ֻ�и����private���������Բ��ܷ��ʣ�����public��������������������protected
    void testVisit()
    {
        publicFunc();
        protectedFunc();
        //privateFunc();      // ���ɷ���
    }
};

class DefPrivateSub : private DefDemo
{
    // ֻ�и����private���������Բ��ܷ��ʣ�����public��protected��������������������private
    void testVisit()
    {
        publicFunc();
        protectedFunc();
        //privateFunc();      // ���ɷ���
    }
};

void test()
{
    DefDemo oDefDemo;
    oDefDemo.publicFunc();
    // oDefDemo.protectedFunc();        // ���ɷ���
    // oDefDemo.privateFunc();          // ���ɷ���

    DefPublicSub oPublicSub;
    oPublicSub.publicFunc();
    // oPublicSub.protectedFunc();      // ���ɷ���
    // oPublicSub.privateFunc();        // ���ɷ���

    DefPortectedSub oProtectedSub;
    // oProtectedSub.publicFunc();      // ���ɷ���
    // oProtectedSub.protectedFunc();   // ���ɷ���
    // oProtectedSub.privateFunc();     // ���ɷ���

    DefPrivateSub oPrivateSub;
    // oPrivateSub.publicFunc();        // ���ɷ���
    // oPrivateSub.protectedFunc();     // ���ɷ���
    // oPrivateSub.privateFunc();       // ���ɷ���
}
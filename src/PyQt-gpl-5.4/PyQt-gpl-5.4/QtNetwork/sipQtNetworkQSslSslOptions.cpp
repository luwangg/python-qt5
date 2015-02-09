/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Thu Feb 05 16:17:36 2015
 *
 * Copyright (c) 2014 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtNetwork.h"

#line 32 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtNetwork/qssl.sip"
#include <qssl.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtNetwork/sipQtNetworkQSslSslOptions.cpp"

#line 32 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtNetwork/qssl.sip"
#include <qssl.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtNetwork/sipQtNetworkQSslSslOptions.cpp"


extern "C" {static int slot_QSsl_SslOptions___bool__(PyObject *);}
static int slot_QSsl_SslOptions___bool__(PyObject *sipSelf)
{
    QSsl::SslOptions *sipCpp = reinterpret_cast<QSsl::SslOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSsl_SslOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSsl::SslOptions::Int() != 0);
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtNetwork/sipQtNetworkQSslSslOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSsl_SslOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSsl_SslOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSsl::SslOptions *sipCpp = reinterpret_cast<QSsl::SslOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSsl_SslOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSsl::SslOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSsl_SslOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSsl::SslOptions::Int() != a0->operator QSsl::SslOptions::Int());
#line 81 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtNetwork/sipQtNetworkQSslSslOptions.cpp"
            sipReleaseType(const_cast<QSsl::SslOptions *>(a0),sipType_QSsl_SslOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QSsl_SslOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSsl_SslOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSsl_SslOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSsl::SslOptions *sipCpp = reinterpret_cast<QSsl::SslOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSsl_SslOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSsl::SslOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSsl_SslOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSsl::SslOptions::Int() == a0->operator QSsl::SslOptions::Int());
#line 117 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtNetwork/sipQtNetworkQSslSslOptions.cpp"
            sipReleaseType(const_cast<QSsl::SslOptions *>(a0),sipType_QSsl_SslOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QSsl_SslOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSsl_SslOptions___invert__(PyObject *);}
static PyObject *slot_QSsl_SslOptions___invert__(PyObject *sipSelf)
{
    QSsl::SslOptions *sipCpp = reinterpret_cast<QSsl::SslOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSsl_SslOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QSsl::SslOptions*sipRes;

            sipRes = new QSsl::SslOptions(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QSsl_SslOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSsl_SslOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QSsl_SslOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSsl::SslOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSsl_SslOptions, &a0, &a0State, &a1))
        {
            QSsl::SslOptions*sipRes;

            sipRes = new QSsl::SslOptions((*a0 & a1));
            sipReleaseType(a0,sipType_QSsl_SslOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSsl_SslOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSsl_SslOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QSsl_SslOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSsl::SslOptions* a0;
        int a0State = 0;
        QSsl::SslOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QSsl_SslOptions, &a0, &a0State, sipType_QSsl_SslOptions, &a1, &a1State))
        {
            QSsl::SslOptions*sipRes;

            sipRes = new QSsl::SslOptions((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QSsl_SslOptions,a0State);
            sipReleaseType(a1,sipType_QSsl_SslOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QSsl_SslOptions,NULL);
        }
    }

    {
        QSsl::SslOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSsl_SslOptions, &a0, &a0State, &a1))
        {
            QSsl::SslOptions*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QSsl::SslOptions(*a0 ^ a1);
#line 220 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtNetwork/sipQtNetworkQSslSslOptions.cpp"
            sipReleaseType(a0,sipType_QSsl_SslOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSsl_SslOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSsl_SslOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QSsl_SslOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSsl::SslOptions* a0;
        int a0State = 0;
        QSsl::SslOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QSsl_SslOptions, &a0, &a0State, sipType_QSsl_SslOptions, &a1, &a1State))
        {
            QSsl::SslOptions*sipRes;

            sipRes = new QSsl::SslOptions((*a0 | *a1));
            sipReleaseType(a0,sipType_QSsl_SslOptions,a0State);
            sipReleaseType(a1,sipType_QSsl_SslOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QSsl_SslOptions,NULL);
        }
    }

    {
        QSsl::SslOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSsl_SslOptions, &a0, &a0State, &a1))
        {
            QSsl::SslOptions*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QSsl::SslOptions(*a0 | a1);
#line 270 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtNetwork/sipQtNetworkQSslSslOptions.cpp"
            sipReleaseType(a0,sipType_QSsl_SslOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSsl_SslOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSsl_SslOptions___int__(PyObject *);}
static PyObject *slot_QSsl_SslOptions___int__(PyObject *sipSelf)
{
    QSsl::SslOptions *sipCpp = reinterpret_cast<QSsl::SslOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSsl_SslOptions));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            sipRes = *sipCpp;

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSsl_SslOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QSsl_SslOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSsl_SslOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSsl::SslOptions *sipCpp = reinterpret_cast<QSsl::SslOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSsl_SslOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QSsl::SslOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSsl_SslOptions, &a0, &a0State))
        {
            sipCpp->QSsl::SslOptions::operator^=(*a0);
            sipReleaseType(a0,sipType_QSsl_SslOptions,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QSsl_SslOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QSsl_SslOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSsl_SslOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSsl::SslOptions *sipCpp = reinterpret_cast<QSsl::SslOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSsl_SslOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QSsl::SslOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSsl_SslOptions, &a0, &a0State))
        {
            sipCpp->QSsl::SslOptions::operator|=(*a0);
            sipReleaseType(a0,sipType_QSsl_SslOptions,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QSsl_SslOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QSsl_SslOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSsl_SslOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSsl::SslOptions *sipCpp = reinterpret_cast<QSsl::SslOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSsl_SslOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QSsl::SslOptions::operator&=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSsl_SslOptions(void *, const sipTypeDef *);}
static void *cast_QSsl_SslOptions(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSsl_SslOptions)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSsl_SslOptions(void *, int);}
static void release_QSsl_SslOptions(void *sipCppV,int)
{
    delete reinterpret_cast<QSsl::SslOptions *>(sipCppV);
}


extern "C" {static void assign_QSsl_SslOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QSsl_SslOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSsl::SslOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSsl::SslOptions *>(sipSrc);
}


extern "C" {static void *array_QSsl_SslOptions(SIP_SSIZE_T);}
static void *array_QSsl_SslOptions(SIP_SSIZE_T sipNrElem)
{
    return new QSsl::SslOptions[sipNrElem];
}


extern "C" {static void *copy_QSsl_SslOptions(const void *, SIP_SSIZE_T);}
static void *copy_QSsl_SslOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSsl::SslOptions(reinterpret_cast<const QSsl::SslOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSsl_SslOptions(sipSimpleWrapper *);}
static void dealloc_QSsl_SslOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSsl_SslOptions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSsl_SslOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSsl_SslOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSsl::SslOptions *sipCpp = 0;

    {
        const QSsl::SslOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QSsl_SslOptions, &a0, &a0State))
        {
            sipCpp = new QSsl::SslOptions(*a0);
            sipReleaseType(const_cast<QSsl::SslOptions *>(a0),sipType_QSsl_SslOptions,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QSsl::SslOptions(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QSsl::SslOptions();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QSsl_SslOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSsl_SslOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QSsl::SslOptions **sipCppPtr = reinterpret_cast<QSsl::SslOptions **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QSsl::SslOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSsl_SslOption)) ||
            sipCanConvertToType(sipPy, sipType_QSsl_SslOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSsl_SslOption)))
{
    *sipCppPtr = new QSsl::SslOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QSsl::SslOptions *>(sipConvertToType(sipPy, sipType_QSsl_SslOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtNetwork/sipQtNetworkQSslSslOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSsl_SslOptions[] = {
    {(void *)slot_QSsl_SslOptions___bool__, bool_slot},
    {(void *)slot_QSsl_SslOptions___ne__, ne_slot},
    {(void *)slot_QSsl_SslOptions___eq__, eq_slot},
    {(void *)slot_QSsl_SslOptions___invert__, invert_slot},
    {(void *)slot_QSsl_SslOptions___and__, and_slot},
    {(void *)slot_QSsl_SslOptions___xor__, xor_slot},
    {(void *)slot_QSsl_SslOptions___or__, or_slot},
    {(void *)slot_QSsl_SslOptions___int__, int_slot},
    {(void *)slot_QSsl_SslOptions___ixor__, ixor_slot},
    {(void *)slot_QSsl_SslOptions___ior__, ior_slot},
    {(void *)slot_QSsl_SslOptions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QSsl_SslOptions, "\1QSsl.SslOptions(QSsl.SslOptions)\n"
    "QSsl.SslOptions(int)\n"
    "QSsl.SslOptions()");


pyqt5ClassTypeDef sipTypeDef_QtNetwork_QSsl_SslOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSsl__SslOptions,
        {0}
    },
    {
        sipNameNr_SslOptions,
        {93, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSsl_SslOptions,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSsl_SslOptions,
    init_type_QSsl_SslOptions,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QSsl_SslOptions,
    assign_QSsl_SslOptions,
    array_QSsl_SslOptions,
    copy_QSsl_SslOptions,
    release_QSsl_SslOptions,
    cast_QSsl_SslOptions,
    convertTo_QSsl_SslOptions,
    0,
    0,
    0,
    0,
    0
},
    0,
    1,
    0,
    0
};
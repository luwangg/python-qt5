/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:17:40 2014
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

#include "sipAPIQtCore.h"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qtextstream.sip"
#include <qtextstream.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQTextStreamNumberFlags.cpp"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qtextstream.sip"
#include <qtextstream.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQTextStreamNumberFlags.cpp"


extern "C" {static int slot_QTextStream_NumberFlags___bool__(PyObject *);}
static int slot_QTextStream_NumberFlags___bool__(PyObject *sipSelf)
{
    QTextStream::NumberFlags *sipCpp = reinterpret_cast<QTextStream::NumberFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextStream_NumberFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTextStream::NumberFlags::Int() != 0);
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQTextStreamNumberFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextStream_NumberFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextStream_NumberFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextStream::NumberFlags *sipCpp = reinterpret_cast<QTextStream::NumberFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextStream_NumberFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextStream::NumberFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextStream_NumberFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTextStream::NumberFlags::Int() != a0->operator QTextStream::NumberFlags::Int());
#line 81 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQTextStreamNumberFlags.cpp"
            sipReleaseType(const_cast<QTextStream::NumberFlags *>(a0),sipType_QTextStream_NumberFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QTextStream_NumberFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextStream_NumberFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextStream_NumberFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextStream::NumberFlags *sipCpp = reinterpret_cast<QTextStream::NumberFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextStream_NumberFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextStream::NumberFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextStream_NumberFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTextStream::NumberFlags::Int() == a0->operator QTextStream::NumberFlags::Int());
#line 117 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQTextStreamNumberFlags.cpp"
            sipReleaseType(const_cast<QTextStream::NumberFlags *>(a0),sipType_QTextStream_NumberFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QTextStream_NumberFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextStream_NumberFlags___invert__(PyObject *);}
static PyObject *slot_QTextStream_NumberFlags___invert__(PyObject *sipSelf)
{
    QTextStream::NumberFlags *sipCpp = reinterpret_cast<QTextStream::NumberFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextStream_NumberFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QTextStream::NumberFlags*sipRes;

            sipRes = new QTextStream::NumberFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QTextStream_NumberFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextStream_NumberFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QTextStream_NumberFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextStream::NumberFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextStream_NumberFlags, &a0, &a0State, &a1))
        {
            QTextStream::NumberFlags*sipRes;

            sipRes = new QTextStream::NumberFlags((*a0 & a1));
            sipReleaseType(a0,sipType_QTextStream_NumberFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextStream_NumberFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextStream_NumberFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QTextStream_NumberFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextStream::NumberFlags* a0;
        int a0State = 0;
        QTextStream::NumberFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QTextStream_NumberFlags, &a0, &a0State, sipType_QTextStream_NumberFlags, &a1, &a1State))
        {
            QTextStream::NumberFlags*sipRes;

            sipRes = new QTextStream::NumberFlags((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QTextStream_NumberFlags,a0State);
            sipReleaseType(a1,sipType_QTextStream_NumberFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QTextStream_NumberFlags,NULL);
        }
    }

    {
        QTextStream::NumberFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextStream_NumberFlags, &a0, &a0State, &a1))
        {
            QTextStream::NumberFlags*sipRes = 0;

#line 103 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
        sipRes = new QTextStream::NumberFlags(*a0 ^ a1);
#line 220 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQTextStreamNumberFlags.cpp"
            sipReleaseType(a0,sipType_QTextStream_NumberFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextStream_NumberFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextStream_NumberFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QTextStream_NumberFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextStream::NumberFlags* a0;
        int a0State = 0;
        QTextStream::NumberFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QTextStream_NumberFlags, &a0, &a0State, sipType_QTextStream_NumberFlags, &a1, &a1State))
        {
            QTextStream::NumberFlags*sipRes;

            sipRes = new QTextStream::NumberFlags((*a0 | *a1));
            sipReleaseType(a0,sipType_QTextStream_NumberFlags,a0State);
            sipReleaseType(a1,sipType_QTextStream_NumberFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QTextStream_NumberFlags,NULL);
        }
    }

    {
        QTextStream::NumberFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextStream_NumberFlags, &a0, &a0State, &a1))
        {
            QTextStream::NumberFlags*sipRes = 0;

#line 98 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
        sipRes = new QTextStream::NumberFlags(*a0 | a1);
#line 270 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQTextStreamNumberFlags.cpp"
            sipReleaseType(a0,sipType_QTextStream_NumberFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextStream_NumberFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextStream_NumberFlags___int__(PyObject *);}
static PyObject *slot_QTextStream_NumberFlags___int__(PyObject *sipSelf)
{
    QTextStream::NumberFlags *sipCpp = reinterpret_cast<QTextStream::NumberFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextStream_NumberFlags));

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


extern "C" {static PyObject *slot_QTextStream_NumberFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QTextStream_NumberFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextStream_NumberFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextStream::NumberFlags *sipCpp = reinterpret_cast<QTextStream::NumberFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextStream_NumberFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QTextStream::NumberFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextStream_NumberFlags, &a0, &a0State))
        {
            sipCpp->QTextStream::NumberFlags::operator^=(*a0);
            sipReleaseType(a0,sipType_QTextStream_NumberFlags,a0State);

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


extern "C" {static PyObject *slot_QTextStream_NumberFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QTextStream_NumberFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextStream_NumberFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextStream::NumberFlags *sipCpp = reinterpret_cast<QTextStream::NumberFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextStream_NumberFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QTextStream::NumberFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextStream_NumberFlags, &a0, &a0State))
        {
            sipCpp->QTextStream::NumberFlags::operator|=(*a0);
            sipReleaseType(a0,sipType_QTextStream_NumberFlags,a0State);

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


extern "C" {static PyObject *slot_QTextStream_NumberFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QTextStream_NumberFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextStream_NumberFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextStream::NumberFlags *sipCpp = reinterpret_cast<QTextStream::NumberFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextStream_NumberFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QTextStream::NumberFlags::operator&=(a0);

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
extern "C" {static void *cast_QTextStream_NumberFlags(void *, const sipTypeDef *);}
static void *cast_QTextStream_NumberFlags(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTextStream_NumberFlags)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextStream_NumberFlags(void *, int);}
static void release_QTextStream_NumberFlags(void *sipCppV,int)
{
    delete reinterpret_cast<QTextStream::NumberFlags *>(sipCppV);
}


extern "C" {static void assign_QTextStream_NumberFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextStream_NumberFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextStream::NumberFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextStream::NumberFlags *>(sipSrc);
}


extern "C" {static void *array_QTextStream_NumberFlags(SIP_SSIZE_T);}
static void *array_QTextStream_NumberFlags(SIP_SSIZE_T sipNrElem)
{
    return new QTextStream::NumberFlags[sipNrElem];
}


extern "C" {static void *copy_QTextStream_NumberFlags(const void *, SIP_SSIZE_T);}
static void *copy_QTextStream_NumberFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextStream::NumberFlags(reinterpret_cast<const QTextStream::NumberFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextStream_NumberFlags(sipSimpleWrapper *);}
static void dealloc_QTextStream_NumberFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextStream_NumberFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextStream_NumberFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextStream_NumberFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextStream::NumberFlags *sipCpp = 0;

    {
        const QTextStream::NumberFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QTextStream_NumberFlags, &a0, &a0State))
        {
            sipCpp = new QTextStream::NumberFlags(*a0);
            sipReleaseType(const_cast<QTextStream::NumberFlags *>(a0),sipType_QTextStream_NumberFlags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QTextStream::NumberFlags(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QTextStream::NumberFlags();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QTextStream_NumberFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QTextStream_NumberFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QTextStream::NumberFlags **sipCppPtr = reinterpret_cast<QTextStream::NumberFlags **>(sipCppPtrV);

#line 124 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QTextStream::NumberFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextStream_NumberFlag)) ||
            sipCanConvertToType(sipPy, sipType_QTextStream_NumberFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextStream_NumberFlag)))
{
    *sipCppPtr = new QTextStream::NumberFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QTextStream::NumberFlags *>(sipConvertToType(sipPy, sipType_QTextStream_NumberFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQTextStreamNumberFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextStream_NumberFlags[] = {
    {(void *)slot_QTextStream_NumberFlags___bool__, bool_slot},
    {(void *)slot_QTextStream_NumberFlags___ne__, ne_slot},
    {(void *)slot_QTextStream_NumberFlags___eq__, eq_slot},
    {(void *)slot_QTextStream_NumberFlags___invert__, invert_slot},
    {(void *)slot_QTextStream_NumberFlags___and__, and_slot},
    {(void *)slot_QTextStream_NumberFlags___xor__, xor_slot},
    {(void *)slot_QTextStream_NumberFlags___or__, or_slot},
    {(void *)slot_QTextStream_NumberFlags___int__, int_slot},
    {(void *)slot_QTextStream_NumberFlags___ixor__, ixor_slot},
    {(void *)slot_QTextStream_NumberFlags___ior__, ior_slot},
    {(void *)slot_QTextStream_NumberFlags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QTextStream_NumberFlags, "\1QTextStream.NumberFlags(QTextStream.NumberFlags)\n"
    "QTextStream.NumberFlags(int)\n"
    "QTextStream.NumberFlags()");


pyqt5ClassTypeDef sipTypeDef_QtCore_QTextStream_NumberFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QTextStream__NumberFlags,
        {0}
    },
    {
        sipNameNr_NumberFlags,
        {250, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextStream_NumberFlags,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTextStream_NumberFlags,
    init_type_QTextStream_NumberFlags,
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
    dealloc_QTextStream_NumberFlags,
    assign_QTextStream_NumberFlags,
    array_QTextStream_NumberFlags,
    copy_QTextStream_NumberFlags,
    release_QTextStream_NumberFlags,
    cast_QTextStream_NumberFlags,
    convertTo_QTextStream_NumberFlags,
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
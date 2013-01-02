# New ports collection Makefile for:	qt4-qtsolutions-soap
# Date created:				26 June 2012
# Whom:					gahr
#
# $FreeBSD: ports/devel/qt4-qtsolutions-soap/Makefile,v 1.3 2012/11/17 05:56:55 svnexp Exp $
#

MASTERDIR=	${.CURDIR}/../qt4-qtsolutions-singleapplication

USE_QT4=	qmake_build moc_build rcc_build uic_build network xml gui

.include	"${MASTERDIR}/Makefile"

PORTNAME=	qt4-qtsolutions-soap

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	QT4 Solutions SOAP Component

DESCR=		${.CURDIR}/pkg-descr

SUB_PROJECT_NAME=	qtsoap
LIBRARY_NAME=		libQtSolutions_SOAP-head.so
LIBRARY_HEADERS=	qtsoap.h \
			QtSoapArray \
			QtSoapArrayIterator \
			QtSoapHttpTransport \
			QtSoapMessage \
			QtSoapNamespaces \
			QtSoapQName \
			QtSoapSimpleType \
			QtSoapStruct \
			QtSoapStructIterator \
			QtSoapType \
			QtSoapTypeConstructor \
			QtSoapTypeConstructorBase \
			QtSoapTypeFactory

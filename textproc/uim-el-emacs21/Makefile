# Created by: MANTANI Nobutaka <nobutaka@FreeBSD.org>
# $FreeBSD: textproc/uim-el-emacs21/Makefile 327773 2013-09-20 23:17:30Z bapt $

MAINTAINER=	nobutaka@FreeBSD.org

COMMENT=	Emacs lisp for uim input method library

CONFLICTS=	uim-el-xemacs21-mule-[0-9]* \
	uim-el-emacs23-[0-9]* \
	uim-el-emacs22-[0-9]*

EMACS_PORT_NAME=emacs21

PLIST=		${MASTERDIR}/pkg-plist
DESCR=		${MASTERDIR}/pkg-descr

MASTERDIR=	${.CURDIR}/../uim-el

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"

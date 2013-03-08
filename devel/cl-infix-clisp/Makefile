# $FreeBSD: ports/devel/cl-infix-clisp/Makefile,v 1.5 2013/01/26 15:07:24 svnexp Exp $

PORTNAME=	infix
PORTVERSION=	19960628
PORTREVISION=	2
CATEGORIES=	devel lisp
PKGNAMEPREFIX=	cl-
DISTFILES=	# none

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	A lisp macro to read math statements in infix notation

BUILD_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/infix/infix.asd:${PORTSDIR}/devel/cl-infix
RUN_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/infix/infix.asd:${PORTSDIR}/devel/cl-infix

NO_CDROM=	No fees or compensation can be charged

USE_ASDF_FASL=	yes
FASL_TARGET=	clisp
FASL_BUILD=	yes

.include "${.CURDIR}/../../devel/cl-asdf/bsd.cl-asdf.mk"
.include <bsd.port.mk>

# $FreeBSD: ports/security/cl-md5-clisp/Makefile,v 1.6 2013/01/26 15:07:28 svnexp Exp $

PORTNAME=	md5
PORTVERSION=	1.8.5
PORTREVISION=	2
CATEGORIES=	security lisp
PKGNAMEPREFIX=	cl-
DISTFILES=	# none

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	A native MD5 implementation in Common Lisp

BUILD_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/md5/md5.asd:${PORTSDIR}/security/cl-md5
RUN_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/md5/md5.asd:${PORTSDIR}/security/cl-md5

USE_ASDF_FASL=	yes
FASL_TARGET=	clisp
FASL_BUILD=	yes

.include "${.CURDIR}/../../devel/cl-asdf/bsd.cl-asdf.mk"
.include <bsd.port.mk>

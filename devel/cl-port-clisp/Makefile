# Created by: Henrik Motakef <henrik.motakef@web.de>
# $FreeBSD: ports/devel/cl-port-clisp/Makefile,v 1.14 2013/02/18 14:39:09 svnexp Exp $

PORTNAME=	port
PORTVERSION=	2002.10.02.1
PORTREVISION=	5
CATEGORIES=	devel lisp
PKGNAMEPREFIX=	cl-
DISTFILES=	# none

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Cross-Lisp portability package

BUILD_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/port/port.asd:${PORTSDIR}/devel/cl-port
RUN_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/port/port.asd:${PORTSDIR}/devel/cl-port

USE_ASDF_FASL=	yes
FASL_TARGET=	clisp
FASL_BUILD=	yes

.include "${.CURDIR}/../../devel/cl-asdf/bsd.cl-asdf.mk"
.include <bsd.port.mk>

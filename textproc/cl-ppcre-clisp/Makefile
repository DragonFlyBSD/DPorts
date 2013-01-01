# New ports collection Makefile for:	cl-ppcre-clisp
# Date created:				16 May 2003
# Whom:					Henrik Motakef <henrik.motakef@web.de>
#
# $FreeBSD: ports/textproc/cl-ppcre-clisp/Makefile,v 1.13 2012/11/17 06:01:53 svnexp Exp $

PORTNAME=	cl-ppcre
PORTVERSION=	2.0.3
PORTREVISION=	1
CATEGORIES=	textproc lisp
DISTFILES=	# none

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Portable Perl-Compatible Regular Expression for Common Lisp

BUILD_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/cl-ppcre/cl-ppcre.asd:${PORTSDIR}/textproc/cl-ppcre
RUN_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/cl-ppcre/cl-ppcre.asd:${PORTSDIR}/textproc/cl-ppcre

USE_ASDF_FASL=	yes
FASL_TARGET=	clisp
FASL_BUILD=	yes

.include "${.CURDIR}/../../devel/cl-asdf/bsd.cl-asdf.mk"
.include <bsd.port.mk>

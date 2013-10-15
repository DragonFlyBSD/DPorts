# Created by: Nakata Maho <maho@FreeBSD.org>
# $FreeBSD: math/qd/Makefile 327746 2013-09-20 20:55:04Z bapt $

PORTNAME=	qd
PORTVERSION=	2.3.7
PORTREVISION=	1
CATEGORIES=	math
MASTER_SITES=	http://www.cs.berkeley.edu/~yozo/software/

MAINTAINER=	maho@FreeBSD.org
COMMENT=	Double-Double and Quad-Double Arithmetic

GNU_CONFIGURE=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>

USE_FORTRAN=	yes
CONFIGURE_ARGS+=	--enable-shared=yes

.include <bsd.port.post.mk>

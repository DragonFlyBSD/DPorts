# Created by: Satoshi TAOKA <taoka@FreeBSD.org>
# $FreeBSD: japanese/freepwing/Makefile 327737 2013-09-20 18:47:54Z bapt $

PORTNAME=	freepwing
PORTVERSION=	1.4.4
PORTREVISION=	1
CATEGORIES=	japanese textproc
MASTER_SITES=	ftp://ftp.sra.co.jp/pub/misc/freepwing/old/1.4/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Free JIS X 4081 (subset of EPWING V1) Formatter

RUN_DEPENDS=	gmake:${PORTSDIR}/devel/gmake

USES=		perl5
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-pkgdocdir=${DOCSDIR}

NO_STAGE=	yes
.include <bsd.port.mk>

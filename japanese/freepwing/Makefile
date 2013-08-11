# Created by: Satoshi TAOKA <taoka@FreeBSD.org>
# $FreeBSD: japanese/freepwing/Makefile 324181 2013-08-03 08:45:51Z az $

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

.include <bsd.port.mk>

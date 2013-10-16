# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: japanese/p5-Text-ChaSen/Makefile 327737 2013-09-20 18:47:54Z bapt $

PORTNAME=	Text-ChaSen
PORTVERSION=	1.03
PORTREVISION=	4
CATEGORIES=	japanese textproc perl5
MASTER_SITES=	SFJP
MASTER_SITE_SUBDIR=	chasen-legacy/32224
DISTNAME=	chasen-${CHASEN_VERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	ChaSen library module for Perl5

LIB_DEPENDS=	chasen.2:${PORTSDIR}/japanese/chasen-base

DISTINFO_FILE=	${.CURDIR}/../chasen-base/distinfo

CHASEN_VERSION=	2.4.4

WRKSRC=		${WRKDIR}/chasen-${CHASEN_VERSION}/perl
USES=		perl5
USE_PERL5=	configure
CONFIGURE_ENV=	PREFIX="${PREFIX}"
MAN3=		Text::ChaSen.3
DOCSDIR=	${PREFIX}/share/doc/chasen

NO_STAGE=	yes
.include <bsd.port.pre.mk>

PKGNAMEPREFIX:=	${PKGNAMEPREFIX}p5-

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}/README.perl
.endif

.include <bsd.port.post.mk>

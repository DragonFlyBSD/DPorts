# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: misc/p5-Business-ISIN/Makefile 324054 2013-07-31 14:36:21Z az $

PORTNAME=	Business-ISIN
PORTVERSION=	0.20
CATEGORIES=	misc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
EXTRACT_SUFX=	.tgz

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Validate International Securities Identification Numbers

BUILD_DEPENDS=	p5-Locale-Codes>=0:${PORTSDIR}/misc/p5-Locale-Codes
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Business::ISIN.3

.include <bsd.port.mk>

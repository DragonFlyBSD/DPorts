# Created by: Don Croyle <croyle@gelemna.org>
# $FreeBSD: news/p5-News-Newsrc/Makefile 332594 2013-11-03 08:05:18Z az $

PORTNAME=	News-Newsrc
PORTVERSION=	1.11
CATEGORIES=	news perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Manage newsrc files

BUILD_DEPENDS=	p5-Set-IntSpan>=0:${PORTSDIR}/math/p5-Set-IntSpan
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

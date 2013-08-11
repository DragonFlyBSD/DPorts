# Created by: Don Croyle <croyle@gelemna.org>
# $FreeBSD: news/p5-News-Newsrc/Makefile 324036 2013-07-31 11:56:17Z az $

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

MAN3=		News::Newsrc.3

.include <bsd.port.mk>

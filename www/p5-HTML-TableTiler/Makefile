# Created by: Cheng-Lung Sung <clsung@dragon2.net>
# $FreeBSD: www/p5-HTML-TableTiler/Makefile 333099 2013-11-07 13:55:25Z vanilla $

PORTNAME=	HTML-TableTiler
PORTVERSION=	1.21
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Module generate a HTML table from bidimensional array data

BUILD_DEPENDS=	p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser \
		p5-IO-Util>=0:${PORTSDIR}/devel/p5-IO-Util
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

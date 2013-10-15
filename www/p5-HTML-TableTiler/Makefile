# Created by: Cheng-Lung Sung <clsung@dragon2.net>
# $FreeBSD: www/p5-HTML-TableTiler/Makefile 327776 2013-09-20 23:36:50Z bapt $

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

MAN3=		HTML::TableTiler.3

NO_STAGE=	yes
.include <bsd.port.mk>

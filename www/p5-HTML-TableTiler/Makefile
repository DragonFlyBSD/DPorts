# New ports collection makefile for:	www/p5-HTML-TableTiler
# Date created:				October 18th 2003
# Whom:	      				Cheng-Lung Sung <clsung@dragon2.net>
#
# $FreeBSD: ports/www/p5-HTML-TableTiler/Makefile,v 1.16 2012/11/17 06:02:50 svnexp Exp $
#

PORTNAME=	HTML-TableTiler
PORTVERSION=	1.21
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A Module generate a HTML table from bidimensional array data

BUILD_DEPENDS=	p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser \
		p5-IO-Util>=0:${PORTSDIR}/devel/p5-IO-Util
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		HTML::TableTiler.3

.include <bsd.port.mk>

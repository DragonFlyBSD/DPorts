# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: www/p5-HTML-StickyQuery/Makefile 315509 2013-03-29 00:44:53Z eadler $

PORTNAME=	HTML-StickyQuery
PORTVERSION=	0.13
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Add sticky QUERY_STRING to a tag href attributes

BUILD_DEPENDS=	p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser \
		p5-URI>=0:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		HTML::StickyQuery.3

.include <bsd.port.mk>

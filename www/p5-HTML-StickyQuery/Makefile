# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: www/p5-HTML-StickyQuery/Makefile 324174 2013-08-02 18:52:07Z mat $

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

USES=		perl5
USE_PERL5=	configure

MAN3=		HTML::StickyQuery.3

.include <bsd.port.mk>

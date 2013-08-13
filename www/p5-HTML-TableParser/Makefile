# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: www/p5-HTML-TableParser/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	HTML-TableParser
PORTVERSION=	0.38
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Extract data from an HTML table

BUILD_DEPENDS=	p5-HTML-Parser>=3.34:${PORTSDIR}/www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		HTML::TableParser.3 HTML::TableParser::Table.3

.include <bsd.port.mk>

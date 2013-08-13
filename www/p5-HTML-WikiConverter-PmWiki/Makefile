# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: www/p5-HTML-WikiConverter-PmWiki/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	HTML-WikiConverter-PmWiki
PORTVERSION=	0.51
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Convert HTML to PmWiki markup

BUILD_DEPENDS=	p5-HTML-WikiConverter>=0.60:${PORTSDIR}/www/p5-HTML-WikiConverter \
		p5-URI>=1.35:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		HTML::WikiConverter::PmWiki.3

.include <bsd.port.mk>

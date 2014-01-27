# Created by: Lars Eggert <lars.eggert@gmx.net>
# $FreeBSD: www/p5-HTML-TokeParser-Simple/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	HTML-TokeParser-Simple
PORTVERSION=	3.16
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Subclass of HTML::TokeParser with easy-to-remember method calls

BUILD_DEPENDS=	p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser \
		p5-Sub-Override>=0:${PORTSDIR}/devel/p5-Sub-Override
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

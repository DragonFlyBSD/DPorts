# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: www/p5-HTTP-SimpleLinkChecker/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	HTTP-SimpleLinkChecker
PORTVERSION=	1.16
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Check the HTTP response code for a link

BUILD_DEPENDS=	p5-libwww>0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

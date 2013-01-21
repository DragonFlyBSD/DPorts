# $FreeBSD: ports/www/p5-Catalyst-Plugin-StatusMessage/Makefile,v 1.1 2012/12/30 12:50:04 svnexp Exp $

PORTNAME=	Catalyst-Plugin-StatusMessage
PORTVERSION=	1.002000
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	fw@moov.de
COMMENT=	Handle passing of status (success and error) messages

BUILD_DEPENDS=	p5-Catalyst-Runtime>=5.7000:${PORTSDIR}/www/p5-Catalyst-Runtime
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	YES

MAN3=		Catalyst::Plugin::StatusMessage.3

.include <bsd.port.mk>

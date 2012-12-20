# New ports collection makefile for:	CGI::Application::Plugin::DBH
# Date created:				02 December 2005
# Whom:					Espen Tagestad <espen@tagestad.no>
#
# $FreeBSD: ports/www/p5-CGI-Application-Plugin-DBH/Makefile,v 1.9 2012/11/17 06:02:45 svnexp Exp $
#

PORTNAME=	CGI-Application-Plugin-DBH
PORTVERSION=	4.00
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lippe@FreeBSD.org
COMMENT=	Easy DBI access from CGI::Application

BUILD_DEPENDS=	p5-CGI-Application>=0:${PORTSDIR}/www/p5-CGI-Application \
		p5-CGI-modules>=0:${PORTSDIR}/www/p5-CGI-modules \
		p5-DBI>=0:${PORTSDIR}/databases/p5-DBI \
		p5-DBD-Mock>=0:${PORTSDIR}/databases/p5-DBD-Mock
RUN_DEPENDS:=	${BUILD_DEPENDS}

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
PERL_MODBUILD=	yes

MAN3=		CGI::Application::Plugin::DBH.3

.include <bsd.port.mk>

# Created by: Daniel Wijnands <daniel@itxl.nl>
# $FreeBSD: www/p5-CGI-Builder-TT2/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	CGI-Builder-TT2
PORTVERSION=	0.03
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:LARSEN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	CGI::Builder and Template Toolkit 2 integration

BUILD_DEPENDS=	p5-CGI-Builder>=0:${PORTSDIR}/www/p5-CGI-Builder \
		p5-Template-Toolkit>=0:${PORTSDIR}/www/p5-Template-Toolkit
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		CGI::Builder::TT2.3

.include <bsd.port.mk>

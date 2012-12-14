# Created by: Fernan Aguero <fernan@iib.unsam.edu.ar>
# $FreeBSD: ports/www/p5-CGI-Expand/Makefile,v 1.8 2012/11/17 06:02:45 svnexp Exp $

PORTNAME=	CGI-Expand
PORTVERSION=	2.03
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Convert flat hash to nested data using TT2's dot convention

BUILD_DEPENDS=	p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	CGI::Expand.3

.include <bsd.port.mk>

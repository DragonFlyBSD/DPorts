# Created by:	Tom Judge <tj@FreeBSD.org>
# $FreeBSD: ports/www/p5-CGI-ExtDirect/Makefile,v 1.1 2013/02/23 19:53:46 svnexp Exp $

PORTNAME=	CGI-ExtDirect
PORTVERSION=	2.02
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tj@FreeBSD.org
COMMENT=	Perl extension for creating Ext.Direct remoting in CGI applications

BUILD_DEPENDS=	p5-RPC-ExtDirect>=2.10:${PORTSDIR}/www/p5-RPC-ExtDirect
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		CGI::ExtDirect.3

.include <bsd.port.mk>

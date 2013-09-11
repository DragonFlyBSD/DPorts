# Created by:	Tom Judge <tj@FreeBSD.org>
# $FreeBSD: www/p5-CGI-ExtDirect/Makefile 326167 2013-09-03 16:18:49Z az $

PORTNAME=	CGI-ExtDirect
PORTVERSION=	2.02
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tj@FreeBSD.org
COMMENT=	Perl extension for creating Ext.Direct remoting in CGI applications

BUILD_DEPENDS=	p5-RPC-ExtDirect>=2.10:${PORTSDIR}/www/p5-RPC-ExtDirect
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		CGI::ExtDirect.3

.include <bsd.port.mk>

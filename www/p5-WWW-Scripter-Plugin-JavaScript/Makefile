# New ports collection makefile for:	p5-WWW-Scripter-Plugin-JavaScript
# Date created:				27 Jan 2010
# Whom:					Emanuel Haupt <ehaupt@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-WWW-Scripter-Plugin-JavaScript/Makefile,v 1.8 2012/11/17 06:02:55 svnexp Exp $
#

PORTNAME=	WWW-Scripter-Plugin-JavaScript
PORTVERSION=	0.008
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	JavaScript plugin for WWW::Scripter

RUN_DEPENDS=	p5-WWW-Scripter>0:${PORTSDIR}/www/p5-WWW-Scripter \
		p5-JE>0:${PORTSDIR}/www/p5-JE
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		WWW::Scripter::Plugin::JavaScript.3 \
		WWW::Scripter::Plugin::JavaScript::JE.3

.include <bsd.port.mk>

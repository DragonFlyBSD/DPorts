# New ports collection makefile for:	p5-CSP
# Date created:			2005-04-13
# Whom:				David Thiel <lx@redundancy.redundancy.org>
#
# $FreeBSD: ports/security/p5-CSP/Makefile,v 1.10 2012/11/17 06:01:10 svnexp Exp $
#

PORTNAME=	CSP
PORTVERSION=	0.34
CATEGORIES=	security perl5
MASTER_SITES=	ftp://ftp.it.su.se/pub/users/leifj/ \
		http://redundancy.redundancy.org/mirror/
PKGNAMEPREFIX=	p5-

MAINTAINER=	lx@FreeBSD.org
COMMENT=	A Perl tool for managing Certificate Authorities

BUILD_DEPENDS=	p5-Date-Calc>=0:${PORTSDIR}/devel/p5-Date-Calc \
		p5-Term-Prompt>=0:${PORTSDIR}/devel/p5-Term-Prompt \
		p5-IPC-Run>=0:${PORTSDIR}/devel/p5-IPC-Run
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		CSP.3

.include <bsd.port.mk>

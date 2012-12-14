# New ports collection makefile for:	p5-IPC-SharedCache
# Date created:				2001/08/29
# Whom:	      				nork@cityfujisawa.ne.jp
#
# $FreeBSD: ports/devel/p5-IPC-SharedCache/Makefile,v 1.10 2012/11/17 05:56:19 svnexp Exp $
#

PORTNAME=	IPC-SharedCache
PORTVERSION=	1.3
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for managing a SysV IPC shared memory cache

BUILD_DEPENDS=	p5-IPC-ShareLite>=0:${PORTSDIR}/devel/p5-IPC-ShareLite \
		p5-Storable>=0:${PORTSDIR}/devel/p5-Storable

RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		IPC::SharedCache.3

.include <bsd.port.mk>

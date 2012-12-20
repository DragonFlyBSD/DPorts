# New ports collection makefile for:	p5-Apache-Session-SharedMem
# Date created:				April 03 2001
# Whom:	      				vanilla
#
# $FreeBSD: ports/www/p5-Apache-Session-SharedMem/Makefile,v 1.13 2012/11/17 06:02:44 svnexp Exp $
#

PORTNAME=	Apache-Session-SharedMem
PORTVERSION=	0.6
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Apache::Session extension that store session in shared memory

BUILD_DEPENDS=	p5-IPC-Cache>=0:${PORTSDIR}/devel/p5-IPC-Cache \
		p5-Apache-Session>=0:${PORTSDIR}/www/p5-Apache-Session
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Apache::Session::Store::SharedMem.3 \
		Apache::Session::SharedMem.3

#post-patch:
#	@${CP} ${WRKSRC}/Apache/Session/SharedMem.pm \
#		${WRKSRC}/lib/Apache/Session

.include <bsd.port.mk>

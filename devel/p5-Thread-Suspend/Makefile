# Created by: Ruben van Staveren
# $FreeBSD: ports/devel/p5-Thread-Suspend/Makefile,v 1.8 2013/02/13 06:44:03 svnexp Exp $

PORTNAME=	Thread-Suspend
PORTVERSION=	1.22
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN}
MASTER_SITE_SUBDIR=	Thread
PKGNAMEPREFIX=	p5-

MAINTAINER=	pclin@FreeBSD.org
COMMENT=	Suspend and resume operations for threads

PERL_CONFIGURE=	yes

MAN3=	Thread::Suspend.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 500809
RUN_DEPENDS+=	p5-threads>=1.39:${PORTSDIR}/devel/p5-threads \
		p5-threads-shared>=1.01:${PORTSDIR}/devel/p5-threads-shared
BUILD_DEPENDS:=	${RUN_DEPENDS}
.endif

pre-everything::
	@${ECHO_MSG} "----------------------------------------------------------"
	@${ECHO_MSG} "This module requires a threaded perl.  If your install"
	@${ECHO_MSG} "is not threaded please install lang/${PERL_PORT} with threads"
	@${ECHO_MSG} "----------------------------------------------------------"

.include <bsd.port.post.mk>

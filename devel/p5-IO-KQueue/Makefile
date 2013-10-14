# $FreeBSD: devel/p5-IO-KQueue/Makefile 327888 2013-09-22 18:05:04Z bapt $

PORTNAME=	IO-KQueue
PORTVERSION=	0.34
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl interface to the BSD kqueue system call

USES=		perl5
USE_PERL5=	configure
NO_STAGE=	yes

MAN3=		IO::KQueue.3

.if !defined(NOPORTDOCS)
post-install:
	@${MKDIR} ${EXAMPLESDIR}
	@${INSTALL_DATA} ${WRKSRC}/examples/* ${EXAMPLESDIR}
	@${ECHO_MSG} "===> Examples installed in ${EXAMPLESDIR}."
.endif

.include <bsd.port.mk>

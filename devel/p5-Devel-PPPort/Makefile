# Created by: mat
# $FreeBSD: devel/p5-Devel-PPPort/Makefile 327888 2013-09-22 18:05:04Z bapt $

PORTNAME=	Devel-PPPort
DISTVERSION=	3.21
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl/Pollution/Portability

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure
NO_STAGE=	yes

MAN3=		Devel::PPPort.3

.if !defined(NOPORTDOCS)
PORTDOCS=	Changes README HACKERS TODO

post-install:
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
	@${ECHO_MSG} "===> Documentation installed in ${DOCSDIR}."
.endif

.include <bsd.port.mk>

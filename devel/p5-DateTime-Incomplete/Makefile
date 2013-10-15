# Created by: mat
# $FreeBSD: devel/p5-DateTime-Incomplete/Makefile 327888 2013-09-22 18:05:04Z bapt $

PORTNAME=	DateTime-Incomplete
PORTVERSION=	0.07.00
DISTVERSION=	${PORTVERSION:C/\.(..)$//}
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Incomplete DateTime, like January 5

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime \
		p5-DateTime-Set>=0.14:${PORTSDIR}/devel/p5-DateTime-Set \
		p5-DateTime-Event-Recurrence>=0:${PORTSDIR}/devel/p5-DateTime-Event-Recurrence
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_STAGE=	yes

MAN3=		DateTime::Incomplete.3

.if !defined(NOPORTDOCS)
PORTDOCS=	Changes LICENSE MANIFEST README TODO

post-install:
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
	@${ECHO_MSG} "===> Documentation installed in ${DOCSDIR}."
.endif

.include <bsd.port.mk>

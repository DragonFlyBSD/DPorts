# Created by: Clement Laforet <sheepkiller@cultdeadsheep.org>
# $FreeBSD: dns/p5-DNS-Config/Makefile 327719 2013-09-20 16:31:57Z bapt $

PORTNAME=	DNS-Config
PORTVERSION=	0.66
PORTREVISION=	0
CATEGORIES=	dns perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	DNS::Config is set of perl modules for name service configurations

USES=		perl5
USE_PERL5=	configure patch

NO_STAGE=	yes
post-patch:
	${FIND} ${WRKSRC} -name '*.pm' -o -name '*.t' -o -name '*.PL' | \
	${XARGS} ${PERL} -pi -e '$$_="" if /^use 5/;' \
			     -e '$$_="" if /(use|no) warnings/;'

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>

PORTNAME=	Object-HashBase
PORTVERSION=	0.018
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:EXODIST
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Build hash based classes
WWW=		https://metacpan.org/dist/Object-HashBase

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE_GPLv1+ =	${WRKSRC}/LICENSE

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

OPTIONS_DEFINE=	RECOMMENDED
OPTIONS_DEFAULT=RECOMMENDED
RECOMMENDED_DESC=	Recommended dependencies by upstream

RECOMMENDED_BUILD_DEPENDS=	p5-Class-Method-Modifiers>=0:devel/p5-Class-Method-Modifiers \
			p5-Class-XSAccessor>=1.19:devel/p5-Class-XSAccessor \
			p5-Role-Tiny>=1.003000:devel/p5-Role-Tiny
RECOMMENDED_RUN_DEPENDS=p5-Class-Method-Modifiers>=0:devel/p5-Class-Method-Modifiers \
			p5-Class-XSAccessor>=1.19:devel/p5-Class-XSAccessor \
			p5-Role-Tiny>=1.003000:devel/p5-Role-Tiny

.include <bsd.port.mk>

PORTNAME=	ssd_report
DISTVERSION=	0.4
CATEGORIES=	sysutils

MAINTAINER=	dteske@FreeBSD.org
COMMENT=	SSD health report
WWW=		https://github.com/FrauBSD/ssd_report

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

FLAVORS=	smartmontools #smart

# smart_RUN_DEPENDS=		smart:sysutils/smart
smartmontools_RUN_DEPENDS=	smartctl:sysutils/smartmontools
smartmontools_PKGNAMESUFFIX=	-smartmontools

USE_GITHUB=	yes
GH_ACCOUNT=	FrauBSD
NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	sbin/ssd_report
PORTDOCS=	README.md

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/ssd_report ${STAGEDIR}${PREFIX}/sbin

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>

PORTNAME=	fwlogwatch
PORTVERSION=	1.5
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	http://fwlogwatch.inside-security.de/sw/

MAINTAINER=	cy@FreeBSD.org
COMMENT=	Packet filter and firewall log analyzer
WWW=		http://fwlogwatch.inside-security.de/

USES=		gettext tar:bzip2
MAKE_ENV=	MKDIR="${MKDIR}"
INSTALL_TARGET=	install install-config install-i18n

post-patch:
	@${REINPLACE_CMD} -e "s,/etc,${PREFIX}/etc,g" ${WRKSRC}/fwlogwatch.8

post-install:
	${INSTALL_SCRIPT} ${FILESDIR}/fwlogwatch.sh.sample \
		${STAGEDIR}${PREFIX}/etc/rc.d

dfly-patch:
	${REINPLACE_CMD} -e 's@[[:<:]]_KERNEL[[:>:]]@_KERNEL_STRUCTURES@g' \
		${WRKSRC}/main.h ${WRKSRC}/resolve.c ${WRKSRC}/utils.c ${WRKSRC}/whois.c

.include <bsd.port.mk>

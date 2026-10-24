PORTNAME=	firebird
PKGNAMESUFFIX=	${PORTVERSION:R:S/.//}-client

COMMENT=	Firebird-3 database client

MASTERDIR=	${.CURDIR}/../firebird30-server

PLIST=		${PKGDIR}/pkg-plist.client

CLIENT_ONLY=	yes

post-extract:
	@${REINPLACE_CMD} -e 's,x86_64\*-\*-freebsd\* |,x86_64*-*-dragonfly* | x86_64*-*-freebsd* |,' \
		-e 's,^  \*-\*-freebsd\* |,  *-*-dragonfly* | *-*-freebsd* |,' \
		${WRKSRC}/configure

.include "${MASTERDIR}/Makefile"
